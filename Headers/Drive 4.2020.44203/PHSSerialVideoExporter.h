//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PHSSerialVideoExporter : NSObject
{
}

+ (void)initialize;
- (void)exportProgressed:(id)arg1;
- (void)observeExportOperation:(id)arg1 forPromise:(id)arg2;
- (CDUnknownBlockType)exportPHAsset:(id)arg1 toURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)requestExportSessionForPHAsset:(id)arg1 preset:(id)arg2;
- (id)asynchronouslyExecuteExportSession:(id)arg1;

@end

