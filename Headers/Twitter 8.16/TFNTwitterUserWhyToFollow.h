//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFNTwitterUserWhyToFollow : NSObject
{
    _Bool _showUserBio;
    _Bool _checked;
    unsigned long long _reason;
    NSString *_interest;
}

+ (unsigned long long)reasonForContext:(id)arg1;
@property(readonly, nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(readonly, nonatomic) _Bool showUserBio; // @synthesize showUserBio=_showUserBio;
@property(readonly, nonatomic) NSString *interest; // @synthesize interest=_interest;
@property(readonly, nonatomic) unsigned long long reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithReason:(unsigned long long)arg1 interest:(id)arg2 showUserBio:(_Bool)arg3 checked:(_Bool)arg4;

@end

