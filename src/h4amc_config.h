/*
Creative Commons: Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)
https://creativecommons.org/licenses/by-nc-sa/4.0/legalcode

You are free to:

Share — copy and redistribute the material in any medium or format
Adapt — remix, transform, and build upon the material

The licensor cannot revoke these freedoms as long as you follow the license terms. Under the following terms:

Attribution — You must give appropriate credit, provide a link to the license, and indicate if changes were made. 
You may do so in any reasonable manner, but not in any way that suggests the licensor endorses you or your use.

NonCommercial — You may not use the material for commercial purposes.

ShareAlike — If you remix, transform, or build upon the material, you must distribute your contributions 
under the same license as the original.

No additional restrictions — You may not apply legal terms or technological measures that legally restrict others 
from doing anything the license permits.

Notices:
You do not have to comply with the license for elements of the material in the public domain or where your use is 
permitted by an applicable exception or limitation. To discuss an exception, contact the author:

philbowles2012@gmail.com

No warranties are given. The license may not give you all of the permissions necessary for your intended use. 
For example, other rights such as publicity, privacy, or moral rights may limit how you use the material.
*/
#define H4AMC_VERSION "0.0.1"
#define H4AMC_ERROR_BASE 100
/*
    Debug levels: 
    0 - No debug messages
    1 - connection / disconnection + paacket names TX/RX messages
    2 - level 1 + MQTT packet types
    3 - level 2 + MQTT packet info (excluding payload)
    4 - everything including full payload hex dump (and deep diagnostics!)
*/

#define H4AMC_DEBUG 0

#define H4AMC_HEADROOM        2000

#define H4AMC_MAX_RETRIES        2