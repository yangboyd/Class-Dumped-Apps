//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStoriesReadReceiptUploader-Protocol.h"

@class SCSessionRequestManager;

@interface SCHTTPStoriesReadReceiptUploader : NSObject <SCStoriesReadReceiptUploader>
{
    SCSessionRequestManager *_requestManager;
}

- (void).cxx_destruct;
- (void)uploadReadReceipts:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithRequestManager:(id)arg1;

@end

