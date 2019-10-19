//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface GCKLaunchOptions : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _relaunchIfRunning;
    NSString *_languageCode;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool relaunchIfRunning; // @synthesize relaunchIfRunning=_relaunchIfRunning;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLanguageCode:(id)arg1 relaunchIfRunning:(_Bool)arg2;
- (id)initWithRelaunchIfRunning:(_Bool)arg1;
- (id)init;

@end

