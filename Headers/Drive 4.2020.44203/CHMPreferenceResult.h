//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CHMPreferenceKey;

@interface CHMPreferenceResult : NSObject
{
    CHMPreferenceKey *_key;
    long long _preference;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long preference; // @synthesize preference=_preference;
@property(readonly, nonatomic) CHMPreferenceKey *key; // @synthesize key=_key;
- (id)initWithKey:(id)arg1 preference:(long long)arg2;

@end

