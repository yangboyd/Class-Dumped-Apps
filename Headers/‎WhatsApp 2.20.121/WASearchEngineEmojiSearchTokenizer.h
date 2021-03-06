//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Core/WASearchEngineTokenizer-Protocol.h>

@class NSString, WASearchEngineTokenizerHelper;

@interface WASearchEngineEmojiSearchTokenizer : NSObject <WASearchEngineTokenizer>
{
    WASearchEngineTokenizerHelper *_helper;
    NSString *_name;
    NSString *_language;
}

+ (id)newRegisteredEmojiSearchTokenizerInDatabase:(struct sqlite3 *)arg1 name:(id)arg2 language:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithDatabase:(struct sqlite3 *)arg1 name:(id)arg2 language:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

