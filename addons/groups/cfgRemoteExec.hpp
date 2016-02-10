class CfgRemoteExec
{
        class Functions
        {
                mode = 1;
                jip = 1;                                       //no functions can use jip

                class grad_groups_fnc_groupCreate {
                  allowedTargets = 2;
                };
                class grad_groups_fnc_groupJoin {
                  allowedTargets = 2;
                };
                class grad_groups_fnc_groupLeave {
                  allowedTargets = 2;
                };
                class grad_groups_fnc_groupEdit {
                  allowedTargets = 2;
                };
                class grad_groups_fnc_setInsignia {
                  allowedTargets = 0;
                  jip = 1;
                };
                class grad_groups_fnc_setFrequency {
                  allowedTargets = 0;
                  jip = 1;
                };
                class grad_groups_fnc_groupRebuild {
                  allowedTargets = 2;
                };
        };
};
