//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSString, SCCognacUserAppPreferences;

@interface SCCognacServiceCoordinatorPersistedUserAppPreferences : NSObject <NSCopying, NSCoding>
{
    NSString *_version;
    NSDate *_date;
    SCCognacUserAppPreferences *_userAppPreferences;
}

@property(readonly, copy, nonatomic) SCCognacUserAppPreferences *userAppPreferences; // @synthesize userAppPreferences=_userAppPreferences;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVersion:(id)arg1 date:(id)arg2 userAppPreferences:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end

