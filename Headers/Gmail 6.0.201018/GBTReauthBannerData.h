//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSString;

@interface GBTReauthBannerData : NSObject <NSCoding>
{
    _Bool _dismissed;
    NSString *_userEmail;
    NSDate *_creationTime;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *creationTime; // @synthesize creationTime=_creationTime;
@property(nonatomic) _Bool dismissed; // @synthesize dismissed=_dismissed;
@property(readonly, copy, nonatomic) NSString *userEmail; // @synthesize userEmail=_userEmail;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithUserEmail:(id)arg1;

@end

