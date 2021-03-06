//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDAFlagSource-Protocol.h"

@class NSString, NSUserDefaults;
@protocol GDAFlagReading, GDAFlagSourceDelegate;

@interface GDAMutableLocalFlagSource : NSObject <GDAFlagSource>
{
    id <GDAFlagReading> _flagReader;
    id <GDAFlagSourceDelegate> _flagSourceDelegate;
    NSString *_userID;
    NSUserDefaults *_userDefaults;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) __weak id <GDAFlagSourceDelegate> flagSourceDelegate; // @synthesize flagSourceDelegate=_flagSourceDelegate;
@property(readonly, nonatomic) id <GDAFlagReading> flagReader; // @synthesize flagReader=_flagReader;
- (void)removeValueForFlagName:(id)arg1;
- (void)setString:(id)arg1 forFlagName:(id)arg2;
- (void)setNumber:(id)arg1 forFlagName:(id)arg2;
- (void)setBool:(_Bool)arg1 forFlagName:(id)arg2;
- (void)updateFlagValues;
- (id)initWithUserID:(id)arg1 userDefaults:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

