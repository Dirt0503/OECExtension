params ["_bullet"];

_bullet addEventHandler ["HitPart",
{ 
    _this spawn
    {
        params ["_projectile", "_hitEntity", "_projectileOwner", "_pos", "_velocity", "_normal", "_components", "_radius" ,"_surfaceType", "_instigator"]; 
        _posAGL = ASLtoAGL _pos; 
        _flechette = createVehicle ["land_cartridge_slug_01_F",_posAGL,[], 0, "CAN_COLLIDE"]; 
        if !(isNull _hitEntity) then 
        {
            systemchat "projectile attached";
            _flechette attachTo [_hitEntity];
        };
        _flechette setVectorDirAndUp [_velocity, _normal];
        deleteVehicle _projectile;

        uisleep 2.5;
        _explosion = "OEC_Ammo_Flechette_Charge" createVehicle _posAGL;
        //_explosion setDamage 1;
        deleteVehicle _flechette;
    };
}]; 