//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTEventSender;

@interface SPTPodcastUIContinueListeningDiffLogger : NSObject
{
    id <SPTEventSender> _eventSender;
}

@property(retain, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
- (void).cxx_destruct;
- (void)logItemsDiffForBackendContentURI:(id)arg1 clientContentURI:(id)arg2 backendContentIndex:(long long)arg3 clientContentIndex:(long long)arg4 backendPlayedPosition:(long long)arg5 clientPlayedPosition:(long long)arg6;
- (id)initWithEventSender:(id)arg1;

@end

