//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseWSObject.h"

@class NSNumber, PfPaWsActivationInfo, PfPaWsError;

@interface PfPaWsPfPaWs_ActivateResponse : BaseWSObject
{
    NSNumber *activateResult;
    PfPaWsActivationInfo *activationInfo;
    PfPaWsError *error;
}

+ (id)objectByXML:(id)arg1;
- (void).cxx_destruct;
@property(retain) PfPaWsError *error; // @synthesize error;
@property(retain) PfPaWsActivationInfo *activationInfo; // @synthesize activationInfo;
@property(copy) NSNumber *activateResult; // @synthesize activateResult;
- (void)loadFrom:(id)arg1;
- (void)fillXML:(id)arg1;
- (id)toXMLElement;

@end

