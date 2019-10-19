//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFLXDataMigratorProtocol-Protocol.h"

@class NSString;

@interface NFLXFalcorUnversionedMigrator : NSObject <NFLXDataMigratorProtocol>
{
    NSString *_fromVersion;
    NSString *_toVersion;
}

+ (id)migratorFromVersion:(id)arg1 toVersion:(id)arg2;
+ (id)migrator;
@property(readonly, copy, nonatomic) NSString *toVersion; // @synthesize toVersion=_toVersion;
@property(readonly, copy, nonatomic) NSString *fromVersion; // @synthesize fromVersion=_fromVersion;
- (void).cxx_destruct;
- (id)migrate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

