//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSSet, PDLAutocompletion;

@protocol PDLContactCache
@property(readonly) long long autocompletionsCount;
- (_Bool)isEmpty;
- (void)addAutocompletion:(PDLAutocompletion *)arg1;
- (NSArray *)autocompletionsWithMethodFieldValues:(NSArray *)arg1;
- (NSSet *)allAutocompletions;
@end

