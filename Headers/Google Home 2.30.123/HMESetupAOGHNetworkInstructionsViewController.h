//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMESetupCustomLayoutViewController.h"

#import "HMESetupAOGHNetworkInstructionsViewDelegate-Protocol.h"

@class NSString;
@protocol GCAConfigurationFlags;

@interface HMESetupAOGHNetworkInstructionsViewController : HMESetupCustomLayoutViewController <HMESetupAOGHNetworkInstructionsViewDelegate>
{
    NSString *_deviceType;
    id <GCAConfigurationFlags> _flags;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <GCAConfigurationFlags> flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
- (void)networkInstructionsView:(id)arg1 didSelectURL:(id)arg2;
- (id)localizedHeaderViewTitle;
- (void)viewDidLoad;
- (id)initWithDeviceType:(id)arg1 experimentFlags:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

