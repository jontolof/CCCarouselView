//
//  CCCarouselView.m
//  CCCarouselView
//
//  Created by Jont Olof Lyttkens on 2011-08-29.
//  Copyright 2011 Mobile Strategist and iOS Developer. All rights reserved.
//

#import "CCCarouselView.h"
#import "CCCarouselViewCell.h"

@protocol CCCarouselViewDataSource <NSObject>
- (NSUInteger)numberOfCellsInCarouselView:(CCCarouselView *)carouselView;
- (BOOL)wantsLoopingForCarouselView:(CCCarouselView *)carouselView;
- (CGSize)cellSizeInCarouselView:(CCCarouselView *)carouselView;
//- (CCCarouselViewCell *)cellAtIndexPath:(NSIndexPath *)indexPath;
- (UIEdgeInsets)edgeInsetInCarouselView:(CCCarouselView *)carouselView;
@end

@protocol CCCarouselViewDelegate <UIScrollViewDelegate>
- (void)carouselView:(CCCarouselView *) didSelectCellAtIndexPath:(NSIndexPath *)indexPath;
@end


@implementation CCCarouselView
@synthesize delegate=delegate_;
@synthesize dataSource=dataSource_;

- (id)initWithCoder:(NSCoder *)aDecoder {
	self = [super initWithCoder: aDecoder];
	if (self) {
		// Add alot of initialization code;
	}
	return self;
}

- (id)initWithFrame:(CGRect)frame {
	self = [super initWithFrame: frame];
	if(self) {
		// Add alot of initialization code;
	}
	return self;
}

- (void)dealloc {
	delegate_ = nil;
	dataSource_ = nil;
	[super dealloc];
}

- (void)setDelegate:(id<CCCarouselViewDelegate>)delegate {
	[super setDelegate: delegate];
	delegate_ = delegate;
}

- (id<CCCarouselViewDelegate>)delegate {
	return delegate_;
}

- (CCCarouselViewCell *)cellAtIndexPath:(NSIndexPath *)indexPath {
	return nil;
}
@end
