//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface AWEPOIDebugDetailCellModel : NSObject
{
    NSString *_title;
    NSString *_desc;
    CDUnknownBlockType _enterDetailBlock;
    CDUnknownBlockType _copyBlock;
    id _context;
    NSNumber *_height;
}

@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType copyBlock; // @synthesize copyBlock=_copyBlock;
@property(copy, nonatomic) CDUnknownBlockType enterDetailBlock; // @synthesize enterDetailBlock=_enterDetailBlock;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

