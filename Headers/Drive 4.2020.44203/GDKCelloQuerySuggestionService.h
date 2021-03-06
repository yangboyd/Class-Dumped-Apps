//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKQuerySuggestionService-Protocol.h"

@class NSString;
@protocol GDKCelloExecuting><GDKCelloQuerying;

@interface GDKCelloQuerySuggestionService : NSObject <GDKQuerySuggestionService>
{
    id <GDKCelloExecuting><GDKCelloQuerying> _cello;
    unsigned long long _fileSuggestionCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long fileSuggestionCount; // @synthesize fileSuggestionCount=_fileSuggestionCount;
@property(readonly, nonatomic) id <GDKCelloExecuting><GDKCelloQuerying> cello; // @synthesize cello=_cello;
- (void)fetchMatchingFilesForQuery:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchSuggestionsForQuery:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithCello:(id)arg1 fileSuggestionCount:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

