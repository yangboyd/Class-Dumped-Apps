//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ServiceCore/SFCOutput.h>

#import <ServiceKnowledge/SFCIndexedEntity-Protocol.h>

@class NSArray, NSString;

@interface SCSSupportedLanguageOutput : SFCOutput <SFCIndexedEntity>
{
    _Bool _knowledgeEnabled;
    NSString *_defaultLanguage;
}

@property(readonly, nonatomic) _Bool knowledgeEnabled; // @synthesize knowledgeEnabled=_knowledgeEnabled;
@property(readonly, nonatomic) NSString *defaultLanguage; // @synthesize defaultLanguage=_defaultLanguage;
- (void).cxx_destruct;
- (id)indexedValue;
- (id)indexedKey;
- (Class)actionModelForPropertyName:(id)arg1 propertyClass:(Class)arg2 contents:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *languages; // @dynamic languages;
@property(readonly) Class superclass;

@end

