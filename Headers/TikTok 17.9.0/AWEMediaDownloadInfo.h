//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEURLModel;

@interface AWEMediaDownloadInfo : NSObject
{
    AWEURLModel *_downloadURL;
    double _estimatedFileSize;
    CDUnknownBlockType _cancelBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(nonatomic) double estimatedFileSize; // @synthesize estimatedFileSize=_estimatedFileSize;
@property(retain, nonatomic) AWEURLModel *downloadURL; // @synthesize downloadURL=_downloadURL;

@end

