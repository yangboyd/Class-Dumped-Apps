//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSString, NSURL;

@interface ANSPackageLogOperation : NSOperation
{
    NSURL *_compressedLogURL;
    NSString *_multipartMimeBoundary;
    NSURL *_packagedLogURL;
}

@property(retain, nonatomic) NSURL *packagedLogURL; // @synthesize packagedLogURL=_packagedLogURL;
@property(retain, nonatomic) NSString *multipartMimeBoundary; // @synthesize multipartMimeBoundary=_multipartMimeBoundary;
@property(retain, nonatomic) NSURL *compressedLogURL; // @synthesize compressedLogURL=_compressedLogURL;
- (void).cxx_destruct;
- (id)multipartURLForCompressedURL:(id)arg1 withBoundary:(id)arg2;
- (void)main;
- (id)initWithCompressedLogURL:(id)arg1 packagedLogURL:(id)arg2 multipartMimeBoundary:(id)arg3;

@end

