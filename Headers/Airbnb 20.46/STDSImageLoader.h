//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSession;

@interface STDSImageLoader : NSObject
{
    NSURLSession *_session;
}

@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)loadImageFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithURLSession:(id)arg1;

@end

