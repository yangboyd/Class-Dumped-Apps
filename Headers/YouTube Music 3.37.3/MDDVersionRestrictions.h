//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@interface MDDVersionRestrictions : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMinimumUseVersion; // @dynamic hasMinimumUseVersion;
@property(nonatomic) _Bool hasMinimumWriteVersion; // @dynamic hasMinimumWriteVersion;
@property(nonatomic) long long minimumUseVersion; // @dynamic minimumUseVersion;
@property(nonatomic) long long minimumWriteVersion; // @dynamic minimumWriteVersion;

@end

