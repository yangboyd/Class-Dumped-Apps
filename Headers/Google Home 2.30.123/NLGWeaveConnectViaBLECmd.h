//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLGWeaveAbstractCmd.h"

@class CBPeripheral, NSString;

@interface NLGWeaveConnectViaBLECmd : NLGWeaveAbstractCmd
{
    NSString *_pairingCode;
    CBPeripheral *_peripheral;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(retain, nonatomic) NSString *pairingCode; // @synthesize pairingCode=_pairingCode;
- (_Bool)isConnectionCommand;
- (void)handleEarlyTerminationErrorResponse:(id)arg1;
- (void)invokeError:(id)arg1;
- (void)execute:(id)arg1;
- (id)initWithDelegate:(id)arg1 pairingCode:(id)arg2 peripheral:(id)arg3;

@end

