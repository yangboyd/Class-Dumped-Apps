//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSString;

@interface AnalyticsUserPreferences : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _in_beta;
    _Bool _in_betaIsSet;
    _Bool _languageIsSet;
    _Bool _hide_nsfw;
    _Bool _hide_nsfwIsSet;
    _Bool _expandoIsSet;
    _Bool _hide_previously_seen_posts;
    _Bool _hide_previously_seen_postsIsSet;
    NSString *_language;
    NSString *_expando;
}

@property(nonatomic) _Bool hide_previously_seen_postsIsSet; // @synthesize hide_previously_seen_postsIsSet=_hide_previously_seen_postsIsSet;
@property(nonatomic) _Bool hide_previously_seen_posts; // @synthesize hide_previously_seen_posts=_hide_previously_seen_posts;
@property(nonatomic) _Bool expandoIsSet; // @synthesize expandoIsSet=_expandoIsSet;
@property(copy, nonatomic) NSString *expando; // @synthesize expando=_expando;
@property(nonatomic) _Bool hide_nsfwIsSet; // @synthesize hide_nsfwIsSet=_hide_nsfwIsSet;
@property(nonatomic) _Bool hide_nsfw; // @synthesize hide_nsfw=_hide_nsfw;
@property(nonatomic) _Bool languageIsSet; // @synthesize languageIsSet=_languageIsSet;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) _Bool in_betaIsSet; // @synthesize in_betaIsSet=_in_betaIsSet;
@property(nonatomic) _Bool in_beta; // @synthesize in_beta=_in_beta;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetHide_previously_seen_posts;
- (void)unsetExpando;
- (void)unsetHide_nsfw;
- (void)unsetLanguage;
- (void)unsetIn_beta;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIn_beta:(_Bool)arg1 language:(id)arg2 hide_nsfw:(_Bool)arg3 expando:(id)arg4 hide_previously_seen_posts:(_Bool)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

