//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTThumbnailLatencyInfo : NSObject
{
    _Bool _hasWidth;
    _Bool _hasHeight;
    _Bool _hasCompressedByteSize;
    _Bool _error;
    _Bool _hasError;
    _Bool _hasCacheType;
    _Bool _hasCacheSource;
    unsigned int _width;
    unsigned int _height;
    unsigned int _compressedByteSize;
    unsigned int _cacheType;
    unsigned int _cacheSource;
}

@property(readonly, nonatomic) _Bool hasCacheSource; // @synthesize hasCacheSource=_hasCacheSource;
@property(nonatomic) unsigned int cacheSource; // @synthesize cacheSource=_cacheSource;
@property(readonly, nonatomic) _Bool hasCacheType; // @synthesize hasCacheType=_hasCacheType;
@property(nonatomic) unsigned int cacheType; // @synthesize cacheType=_cacheType;
@property(readonly, nonatomic) _Bool hasError; // @synthesize hasError=_hasError;
@property(nonatomic) _Bool error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool hasCompressedByteSize; // @synthesize hasCompressedByteSize=_hasCompressedByteSize;
@property(nonatomic) unsigned int compressedByteSize; // @synthesize compressedByteSize=_compressedByteSize;
@property(readonly, nonatomic) _Bool hasHeight; // @synthesize hasHeight=_hasHeight;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(readonly, nonatomic) _Bool hasWidth; // @synthesize hasWidth=_hasWidth;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
- (int)ytiLatencyImageRequestorType;
- (int)ytiLatencyImageCacheType;
- (id)ytiThumbnailLoadInfo;

@end

