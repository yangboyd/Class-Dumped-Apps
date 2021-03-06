//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTResponderEvent.h>

@class NSError, NSString;

@interface YTForceSignOutResponderEvent : YTResponderEvent
{
    NSError *_error;
    NSString *_googleID;
}

+ (id)eventWithError:(id)arg1 googleID:(id)arg2 firstResponder:(id)arg3;
@property(readonly, nonatomic) NSString *googleID; // @synthesize googleID=_googleID;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)initWithError:(id)arg1 googleID:(id)arg2 firstResponder:(id)arg3;

@end

