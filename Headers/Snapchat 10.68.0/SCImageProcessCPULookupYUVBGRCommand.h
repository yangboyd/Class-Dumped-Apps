//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCImageProcessCPUCommand.h"

@interface SCImageProcessCPULookupYUVBGRCommand : SCImageProcessCPUCommand
{
    struct CGImage *_lookupTable;
    char *_lookupTableSource;
}

- (id)commandName;
- (id)runWithContext:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 outputPixelBuffer:(struct __CVBuffer *)arg3 orientation:(long long)arg4 error:(id *)arg5;
- (void)_setupLookupTableSource;
- (void)dealloc;
- (id)initWithLookupTable:(struct CGImage *)arg1;

@end

