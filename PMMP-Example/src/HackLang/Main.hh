<?hh

namespace HackLang;

use pocketmine\plugin\PluginBase;
use pocketmine\Player;
use pocketmine\Server;

class Main extends PluginBase Listener{

function onEnable() : void {
  $plugin = "HHVM lang Example";
  $this->getLogger()->info("Example Plugin[.$plugin.] is loading...");
 }
}
