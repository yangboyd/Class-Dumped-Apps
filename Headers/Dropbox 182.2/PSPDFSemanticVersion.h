//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PSPDFSemanticVersion : NSObject
{
    long long _major;
    long long _minor;
    long long _patch;
    NSString *_prerelease;
}

@property(readonly, copy, nonatomic) NSString *prerelease; // @synthesize prerelease=_prerelease;
@property(readonly, nonatomic) long long patch; // @synthesize patch=_patch;
@property(readonly, nonatomic) long long minor; // @synthesize minor=_minor;
@property(readonly, nonatomic) long long major; // @synthesize major=_major;
- (void).cxx_destruct;
- (id)parseVersionString:(id)arg1;
- (id)description;
- (_Bool)versionIsGreaterThan:(id)arg1;
- (_Bool)versionIsLessThan:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)init;

@end

