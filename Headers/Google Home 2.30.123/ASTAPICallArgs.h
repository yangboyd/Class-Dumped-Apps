//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASTAPICallArgs_ContactUi, ASTCTContactEndpoint, ASTCTProvider, NSMutableArray, NSString;

@interface ASTAPICallArgs : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool avoidSwitchingForegroundTask; // @dynamic avoidSwitchingForegroundTask;
@property(retain, nonatomic) ASTCTContactEndpoint *caller; // @dynamic caller;
@property(retain, nonatomic) ASTAPICallArgs_ContactUi *contactUi; // @dynamic contactUi;
@property(copy, nonatomic) NSString *endpoint; // @dynamic endpoint;
@property(copy, nonatomic) NSString *endpointType; // @dynamic endpointType;
@property(nonatomic) _Bool hasCaller; // @dynamic hasCaller;
@property(nonatomic) _Bool hasContactUi; // @dynamic hasContactUi;
@property(nonatomic) _Bool isAnonymous; // @dynamic isAnonymous;
@property(nonatomic) _Bool isSpeakerphone; // @dynamic isSpeakerphone;
@property(retain, nonatomic) ASTCTProvider *provider; // @dynamic provider;
@property(nonatomic) _Bool systemDefault; // @dynamic systemDefault;
@property(retain, nonatomic) NSMutableArray *targetDevicesArray; // @dynamic targetDevicesArray;
@property(readonly, nonatomic) unsigned long long targetDevicesArray_Count; // @dynamic targetDevicesArray_Count;
@property(readonly, nonatomic) int typeOneOfCase; // @dynamic typeOneOfCase;

@end

