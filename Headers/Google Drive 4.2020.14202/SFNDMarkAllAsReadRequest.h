//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString;

@interface SFNDMarkAllAsReadRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasVersion; // @dynamic hasVersion;
@property(nonatomic) _Bool hasView; // @dynamic hasView;
@property(nonatomic) unsigned long long version; // @dynamic version;
@property(copy, nonatomic) NSString *view; // @dynamic view;

@end

