params ["_projectile"];

_hitPartRan = 0;
_projectile addEventHandler ["hitPart", 
{
    params ["_projectile", "_hitEntity", "_projectileOwner", "_pos", "_velocity", "_normal", "_components", "_radius" ,"_surfaceType", "_instigator"];
    systemchat "hitPart triggered";
    systemchat (str _pos);
    private _flechette = "land_cartridge_slug_01_F" createVehicleLocal _pos;
    _flechette setVectorDirAndUp [_velocity, _normal];
    if !(isNull _hitEntity) then 
    {
        systemchat "projectile attached";
        _flechette attachTo [_hitEntity,[0,0,0], _components];
    };
    _hitPartRan = 1;
}];
