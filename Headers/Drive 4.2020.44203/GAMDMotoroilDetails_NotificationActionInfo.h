//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString;

@interface GAMDMotoroilDetails_NotificationActionInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int action; // @dynamic action;
@property(nonatomic) int category; // @dynamic category;
@property(nonatomic) long long errorCode; // @dynamic errorCode;
@property(copy, nonatomic) NSString *errorDomain; // @dynamic errorDomain;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(nonatomic) _Bool hasCategory; // @dynamic hasCategory;
@property(nonatomic) _Bool hasErrorCode; // @dynamic hasErrorCode;
@property(nonatomic) _Bool hasErrorDomain; // @dynamic hasErrorDomain;
@property(nonatomic) _Bool hasTextInputLength; // @dynamic hasTextInputLength;
@property(nonatomic) long long textInputLength; // @dynamic textInputLength;

@end

