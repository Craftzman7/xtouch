# ![image](readme-assets/xtouch.png)

# XTOUCH Lan Edition
XTOUCH with support for LAN printers.

### Installation
Please follow the normal provisioning instructions with the Chrome extension found [here](https://github.com/xperiments-in/xtouch?tab=readme-ov-file#first-time-and-other-provisioning-using-the-chrome-extension) or you can create the JSON file yourself with the instructions found in the `Advanced Users` section found below. Make sure your SD card is less than 32gb and is formatted with a FAT32 filesystem.<br/>
Once you've put your `provisioning.json` on your SD please go [here](https://craftzman7.github.io/xtouch-bin) to install the LAN firmware and proceed like you would normally. Make sure your SD is inserted into the board at this point. There will be errors saying you need to edit `xtouch/settings.json`. At this point put the SD card back into your computer and edit the `xtouch/settings.json` file. Replace `00000000` with your LAN access code. Replace `0.0.0.0` with your printer's IP address. Lastly, replace `unset` with your printer's serial number. That's it! Plug the SD card back into the XTOUCH and see the fruits of your labor!<br/>

### Advanced Users
Advanced users in LAN mode may skip the extension create the `provisioning.json` file from scratch. It should contain only the wifi SSID and password.
```json
{
  "ssid": "MY_AWESOME_WIFI",
  "pwd": "SHH_DONT_TELL_ANYONE_hehehe"
}
```

### Troubleshooting
If your screen isn't responsive and all the values on the home page say zero that means your serial number was probably entered incorrectly. Pull the SD card back out and check that it was entered correctly.
