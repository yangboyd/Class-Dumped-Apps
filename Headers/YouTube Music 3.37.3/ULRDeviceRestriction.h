//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSString, ULRIdentity;

@interface ULRDeviceRestriction : NSObject <NSCopying>
{
    NSString *_eggnogDeviceRestriction;
    ULRIdentity *_identity;
    NSString *_identifyingURLScheme;
    long long _libraryLevel;
    NSDate *_lastUpdateDate;
    long long _localReportingRestriction;
}

@property(readonly, nonatomic) long long localReportingRestriction; // @synthesize localReportingRestriction=_localReportingRestriction;
@property(readonly, copy, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(readonly, nonatomic) long long libraryLevel; // @synthesize libraryLevel=_libraryLevel;
@property(readonly, copy, nonatomic) NSString *identifyingURLScheme; // @synthesize identifyingURLScheme=_identifyingURLScheme;
@property(readonly, nonatomic) ULRIdentity *identity; // @synthesize identity=_identity;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *eggnogDeviceRestriction; // @synthesize eggnogDeviceRestriction=_eggnogDeviceRestriction;
@property(readonly, nonatomic, getter=isRestricted) _Bool restricted;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIdentity:(id)arg1 identifyingURLScheme:(id)arg2 libraryLevel:(long long)arg3 lastUpdateDate:(id)arg4 localReportingRestriction:(long long)arg5 eggnogDeviceRestriction:(id)arg6;

@end

