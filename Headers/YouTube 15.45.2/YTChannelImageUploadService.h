//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTMSessionUploadFetcher;

@interface YTChannelImageUploadService : NSObject
{
    GTMSessionUploadFetcher *_uploadFetcher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTMSessionUploadFetcher *uploadFetcher; // @synthesize uploadFetcher=_uploadFetcher;
- (void)uploadImageWithImageData:(id)arg1 externalChannelID:(id)arg2 uploadURLString:(id)arg3 authorization:(id)arg4 successBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (id)init;

@end

