//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NFUIPlayerFoundation/NFLXDictionaryRepresentationProtocol-Protocol.h>

@class NSNumber, NSString;

@interface NFUIBookmark : NSObject <NFLXDictionaryRepresentationProtocol>
{
    NSNumber *_entityId;
    double _position;
    double _lastModified;
    double _runtime;
    double _logicalStartPosition;
    double _logicalEndPosition;
    double _watchedToEnd;
    double _openingCreditsStart;
    double _openingCreditsEnd;
    double _openingRecapStart;
    double _openingRecapEnd;
    NSNumber *_interactiveProgress;
    double _displayRuntime;
}

@property(nonatomic) double displayRuntime; // @synthesize displayRuntime=_displayRuntime;
@property(copy, nonatomic) NSNumber *interactiveProgress; // @synthesize interactiveProgress=_interactiveProgress;
@property(nonatomic) double openingRecapEnd; // @synthesize openingRecapEnd=_openingRecapEnd;
@property(nonatomic) double openingRecapStart; // @synthesize openingRecapStart=_openingRecapStart;
@property(nonatomic) double openingCreditsEnd; // @synthesize openingCreditsEnd=_openingCreditsEnd;
@property(nonatomic) double openingCreditsStart; // @synthesize openingCreditsStart=_openingCreditsStart;
@property(nonatomic) double watchedToEnd; // @synthesize watchedToEnd=_watchedToEnd;
@property(nonatomic) double logicalEndPosition; // @synthesize logicalEndPosition=_logicalEndPosition;
@property(nonatomic) double logicalStartPosition; // @synthesize logicalStartPosition=_logicalStartPosition;
@property(nonatomic) double runtime; // @synthesize runtime=_runtime;
@property(nonatomic) double lastModified; // @synthesize lastModified=_lastModified;
@property(nonatomic) double position; // @synthesize position=_position;
@property(copy, nonatomic) NSNumber *entityId; // @synthesize entityId=_entityId;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setNilValueForKey:(id)arg1;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (_Bool)isFinished;
- (_Bool)isResumable;
- (float)progress;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)updateWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

