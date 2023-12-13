from pyradioconfig.parts.bobcat.targets.Target_IC import Target_IC_Bobcat
from pyradioconfig.calculator_model_framework.interfaces.itarget import ITarget

class TargetIcRainier(Target_IC_Bobcat):

    _targetName = ITarget.IC_str
    _description = ""
    _store_config_output = True
    _cfg_location = "rainier"
    _tag = ITarget.IC_str
