//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;
@protocol GDKFile;

@interface GDKFileOrError : NSObject
{
    id <GDKFile> _file;
    NSError *_error;
}

+ (id)withError:(id)arg1;
+ (id)withFile:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) id <GDKFile> file; // @synthesize file=_file;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)invokeFileCallback:(CDUnknownBlockType)arg1;
- (void)matchFile:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
- (id)initWithFile:(id)arg1 error:(id)arg2;

@end

