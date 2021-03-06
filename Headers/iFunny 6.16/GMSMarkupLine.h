//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/GMSLine.h>

@interface GMSMarkupLine : GMSLine
{
    _Bool _connectToPrevious;
    _Bool _tintTextureWithColor;
    _Bool _breadcrumb;
    float _startingDistance;
    basic_string_90719d97 _consumedTextureName;
}

@property(nonatomic, getter=isBreadcrumb) _Bool breadcrumb; // @synthesize breadcrumb=_breadcrumb;
@property(nonatomic) _Bool tintTextureWithColor; // @synthesize tintTextureWithColor=_tintTextureWithColor;
@property(nonatomic) basic_string_90719d97 consumedTextureName; // @synthesize consumedTextureName=_consumedTextureName;
@property(nonatomic) float startingDistance; // @synthesize startingDistance=_startingDistance;
@property(nonatomic) _Bool connectToPrevious; // @synthesize connectToPrevious=_connectToPrevious;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithBreadcrumbPolyline:(id)arg1 stylingID:(const struct StyleID *)arg2;
- (id)initWithPolyline:(id)arg1 stylingID:(const struct StyleID *)arg2 startCap:(unsigned int)arg3 endCap:(unsigned int)arg4 jointShape:(int)arg5;

@end

