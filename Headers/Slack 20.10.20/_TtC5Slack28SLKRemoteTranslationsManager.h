//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC5Slack28SLKRemoteTranslationsManager : NSObject
{
    // Error parsing type: , name: dependencies
    // Error parsing type: , name: persistentStore
    // Error parsing type: , name: translations
}

- (void).cxx_destruct;
- (id)init;
- (void)didChangeLocaleWithLocaleIdentifier:(id)arg1;
- (id)downloadTranslationMappings;
- (void)loadCachedTranslations;
- (id)translationForKey:(id)arg1 type:(long long)arg2 defaultTranslation:(id)arg3;
- (void)dealloc;
- (id)initWithDependencies:(id)arg1;

@end

