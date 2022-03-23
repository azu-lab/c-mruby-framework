# c-mruby-framework
このc-mruby-frameworkはmruby-on-ev3rt+tecsを元に作成しました。
>従来のmruby-on-ev3rt+tecsではmrubyからTECSを操作する(呼び出す)ことは実現されていました。
>c-mruby-frameworkではTECSからmrubyを呼び出すことを可能にしています。

#### サンプルプログラム
TECSでmrubyのボタンサンプルプログラムを動かす
>・ EV3の押されたボタンに対応した文字列がLCD上に表示される

#### 環境構築
1. Cygwinインストール
>・ Ruby
>・ GNU MAKE
>・ bison
>・ [クロスコンパイラ](https://launchpad.net/gcc-arm-embedded/4.8/4.8-2014-q3-update/+download/gcc-arm-none-eabi-4_8-2014q3-20140805-win32.exe)
>Cygwin及びクロスコンパイラのインストールは[こちら](https://dev.toppers.jp/trac_user/ev3pf/wiki/DevEnvWin)を参考に。
2. [提案フレームワーク](https://github.com/azu-lab/c-mruby-framework.git)をダウンロード
3. [TeraTerm](https://ja.osdn.net/projects/ttssh2/)のダウンロード

#### コンパイル手順
1. Bluetoothローダを含むプラットフォームをビルドし、SDカードにコピー
・ mruby-on-ev3rt+tecs_package-beta1.0.1/hr-tecs/workspace/bluetooth1に移動。
   >-Makefile(58行目)を編集し、SDカードのドライブ名を設定。
![ドライブ](https://user-images.githubusercontent.com/71630047/159626217-238c4452-e63c-4217-9343-b6ef4d4d464c.png)
2. 設定後ビルドを行う。
```
make tecs
make
```
の順番。
このような画面になれば成功。
![手順２](https://user-images.githubusercontent.com/71630047/159627117-14b902ba-b284-4d06-af39-853a84115a28.png)
3. mrubyバイトコードの作成
>・ mruby-on-ev3rt+tecs_package-beta1.0.1/hr-tecs/workspace/mruby_appに移動。
>・ このディレクトリにボタンサンプルプログラム(dynamic.rb)があるので、mruby
　 プログラム(dynamic.rb)をコンパイル。
```
make
```
dynamic.mrbというファイルが作成されるはずです。これがバイトコードになります。

#### バイトコードの転送
1. EV3にSDカードを差し込み起動。
2. スタート画面のRun Appshomoを中央ボタンで選択して、PCとBluetoothのペアリングを行う(PINは0000)。
![手順３](https://user-images.githubusercontent.com/71630047/159627785-3f47b4e9-f7c6-4912-9119-5b137c79978c.png)
3. ペアリング完了後、TeraTermを起動しEV３と接続し、設定を行う。
    -シリアルを選択
    -設定タブ→シリアルポート→スピード→115200
4. TeraTermから転送
    -ファイルタブ→転送→ZMODEM→送信





転送するバイトコードを選択/転送が終わるとmrubyプログラムが実行される。(ボタンを押してみてください。上下左右)

    








