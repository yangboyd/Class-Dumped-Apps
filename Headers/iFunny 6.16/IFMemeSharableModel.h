//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFModelProtocol-Protocol.h>

@class FNROContent, NSString, NSURL, UIImage;
@protocol IFControllerProtocol;

@interface IFMemeSharableModel : NSObject <IFModelProtocol>
{
    id <IFControllerProtocol> _controller;
    UIImage *_preview;
    FNROContent *_content;
}

+ (id)withContent:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FNROContent *content; // @synthesize content=_content;
@property(readonly, nonatomic) UIImage *preview; // @synthesize preview=_preview;
@property(nonatomic) __weak id <IFControllerProtocol> controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) NSString *shareURLString;
@property(readonly, nonatomic) NSURL *previewURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

