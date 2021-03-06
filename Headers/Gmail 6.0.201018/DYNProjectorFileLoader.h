//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAVFileLoading-Protocol.h"

@class DYNProjectorFile, GTMSessionFetcher, GTMSessionFetcherService, NSString;
@protocol DYNScottyUrlFactory;

@interface DYNProjectorFileLoader : NSObject <GAVFileLoading>
{
    GTMSessionFetcher *_fetcher;
    GTMSessionFetcherService *_fetcherService;
    DYNProjectorFile *_file;
    id <DYNScottyUrlFactory> _URLFactory;
    NSString *_fileID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
- (_Bool)applyPreviewContentFromCacheWithKey:(id)arg1;
- (void)loadViewURLString:(id)arg1 fileListener:(id)arg2;
- (void)loadStreamingURLString:(id)arg1 fileListener:(id)arg2;
- (void)cancelLoadFile;
- (void)loadFileWithListener:(id)arg1;
- (id)initWithFile:(id)arg1 authorizer:(id)arg2 URLFactory:(id)arg3;
- (id)initWithFile:(id)arg1 sessionFetcherService:(id)arg2 URLFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

