# Blackwings
..is a v.95.1 Mushroom game client

### 🎉 Features
Features of Blackwings are configurable via `Blackwings.ini`

The following are the available config options:

#### Connection
* Host - Connection host
* Port - Connection port
#### Game
* Title - Game Window Title
* LogoSkip - Enables game logo skip
* WindowSizing - Enables dynamic window resizing

### ✨ Usage

#### Prerequisites
* An installation of v.95.1 Mushroom game
* An installation of CFF Explorer (or any alternative)
* A working copy of a v.95.1 localhost

#### Download a release
1. Check the [releases](https://github.com/Kaioru/Blackwings/releases) tab and download a release!

#### Copy release contents
2. Copy `Blackwings.dll` and `Blackwings.ini` to your Mushroom game folder with the localhost

#### Add imports to localhost
3. Open the localhost in CFF Explorer
4. Select `Import Adder` in the left tab
5. Select `Add` and locate `Blackwings.dll`
6. Select `00000001 - NoOp` in the Exported Functions tab
7. Select the `Import By Name` button
8. Select `Rebuild Import Table`
9. Save the file via the toolbar `File -> Save`

#### Update configurations
10. Modify the `Blackwings.ini` file to the appropriate settings

#### Running the localhost
11. Run the localhost executable and `Blackwings` will be automatically injected