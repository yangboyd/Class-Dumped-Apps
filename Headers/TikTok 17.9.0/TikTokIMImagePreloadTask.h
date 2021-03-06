//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TikTokIMPreloadTaskProtocol-Protocol.h"

@class AWEURLModel, NSString, UIImageView;

@interface TikTokIMImagePreloadTask : NSObject <TikTokIMPreloadTaskProtocol>
{
    AWEURLModel *_urlModel;
    unsigned long long _imgType;
    UIImageView *_imgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(nonatomic) unsigned long long imgType; // @synthesize imgType=_imgType;
@property(retain, nonatomic) AWEURLModel *urlModel; // @synthesize urlModel=_urlModel;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;
- (id)name;
- (id)initWithURLModel:(id)arg1 imageType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

