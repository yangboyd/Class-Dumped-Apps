//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GHCAddThermostatAtomRequest, GHCAddThermostatScheduleRequest, GHCCopyAtomsFromDeviceRequest, GHCCopyScheduleFromDeviceRequest, GHCCopyThermostatScheduleRequest, GHCGetDashboardDataRequest, GHCGetFanScheduleRequest, GHCGetTemperatureTraitRequest, GHCGetThermostatAtomsRequest, GHCGetThermostatSchedulesRequest, GHCGetThermostatStatusRequest, GHCGetWiringConfigurationRequest, GHCRemoveThermostatAtomRequest, GHCRemoveThermostatScheduleRequest, GHCSetDefaultThermostatScheduleRequest, GHCSetTemperatureTraitRequest, GHCStartScheduleHoldRequest, GHCStopScheduleHoldRequest, GHCUpdateActiveAtomRequest, GHCUpdateEmergencyHeatRequest, GHCUpdateFanScheduleRequest, GHCUpdateTargetTemperatureRangeRequest, GHCUpdateTargetTemperatureRequest, GHCUpdateThermostatAtomsRequest, GHCUpdateThermostatFanModeRequest, GHCUpdateThermostatModeRequest, GHCUpdateThermostatScheduleRequest, GHCUpdateWiringConfigurationRequest, GHCValidateProIdRequest, GRPCCallOptions, GRPCUnaryProtoCall;
@protocol GRPCProtoResponseHandler;

@protocol GHCEnergyService2 <NSObject>
- (GRPCUnaryProtoCall *)updateEmergencyHeatWithMessage:(GHCUpdateEmergencyHeatRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)updateWiringConfigurationWithMessage:(GHCUpdateWiringConfigurationRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)getWiringConfigurationWithMessage:(GHCGetWiringConfigurationRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)stopScheduleHoldWithMessage:(GHCStopScheduleHoldRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)startScheduleHoldWithMessage:(GHCStartScheduleHoldRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)validateProIdWithMessage:(GHCValidateProIdRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)getDashboardDataWithMessage:(GHCGetDashboardDataRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)setTemperatureTraitWithMessage:(GHCSetTemperatureTraitRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)getTemperatureTraitWithMessage:(GHCGetTemperatureTraitRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)updateFanScheduleWithMessage:(GHCUpdateFanScheduleRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)getFanScheduleWithMessage:(GHCGetFanScheduleRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)updateActiveAtomWithMessage:(GHCUpdateActiveAtomRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)copyAtomsFromDeviceWithMessage:(GHCCopyAtomsFromDeviceRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)copyScheduleFromDeviceWithMessage:(GHCCopyScheduleFromDeviceRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)copyThermostatScheduleWithMessage:(GHCCopyThermostatScheduleRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)updateThermostatScheduleWithMessage:(GHCUpdateThermostatScheduleRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)removeThermostatScheduleWithMessage:(GHCRemoveThermostatScheduleRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)setDefaultThermostatScheduleWithMessage:(GHCSetDefaultThermostatScheduleRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)getThermostatSchedulesWithMessage:(GHCGetThermostatSchedulesRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)addThermostatScheduleWithMessage:(GHCAddThermostatScheduleRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)getThermostatAtomsWithMessage:(GHCGetThermostatAtomsRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)updateThermostatAtomsWithMessage:(GHCUpdateThermostatAtomsRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)removeThermostatAtomWithMessage:(GHCRemoveThermostatAtomRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)addThermostatAtomWithMessage:(GHCAddThermostatAtomRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)getThermostatStatusWithMessage:(GHCGetThermostatStatusRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)updateThermostatFanModeWithMessage:(GHCUpdateThermostatFanModeRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)updateThermostatModeWithMessage:(GHCUpdateThermostatModeRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)updateTargetTemperatureRangeWithMessage:(GHCUpdateTargetTemperatureRangeRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)updateTargetTemperatureWithMessage:(GHCUpdateTargetTemperatureRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
@end

