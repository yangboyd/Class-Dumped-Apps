//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@class NSURL;

@interface WAMemoryMappedImage : UIImage
{
    NSURL *_backingFileURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *backingFileURL; // @synthesize backingFileURL=_backingFileURL;
- (id)initWithBackingFileURL:(id)arg1 config:(CDStruct_8b67c3b9)arg2;
- (id)initWithBackingFileURL:(id)arg1 pixelWidth:(unsigned long long)arg2 pixelHeight:(unsigned long long)arg3;
- (id)wa_memoryMappedImage;

@end

