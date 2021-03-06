//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString;

@interface XCDYouTubeClient : NSObject
{
    NSString *_languageIdentifier;
    NSOperationQueue *_queue;
}

+ (id)defaultClient;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSString *languageIdentifier; // @synthesize languageIdentifier=_languageIdentifier;
- (void).cxx_destruct;
- (id)getVideoWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getVideoWithIdentifier:(id)arg1 cookies:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithLanguageIdentifier:(id)arg1;
- (id)init;

@end

