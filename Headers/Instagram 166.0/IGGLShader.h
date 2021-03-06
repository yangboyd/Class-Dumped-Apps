//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGContext;

@interface IGGLShader : NSObject
{
    unsigned int _shaderId;
    IGContext *_context;
}

+ (shared_ptr_00a1b2d6)createIglShaderWithData:(id)arg1 entryPoint:(id)arg2;
+ (shared_ptr_00a1b2d6)compileIglShaderWithSource:(id)arg1 type:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak IGContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) unsigned int shaderId; // @synthesize shaderId=_shaderId;
- (id)initShaderWithSource:(id)arg1 type:(long long)arg2;
- (id)initFragmentShaderWithSource:(id)arg1;
- (id)initVertexShaderWithSource:(id)arg1;
- (void)dealloc;

@end

